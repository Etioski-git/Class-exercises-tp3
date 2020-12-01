#include <iostream>

using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal
{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function
    void changeWeight (int pounds);
    inline void changeWeightDate (int today){ this->weightDate = today; }
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
    void isMotherOf (ZooAnimal& mother) {this->mother=&mother;}
};


void ZooAnimal::Create(char * n, int cageno, int wD, int w)
{
    this->name = n;
    this->cageNumber = cageno;
    this->weightDate = wD;
    this->weight = w;
}

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}

char* ZooAnimal::reptName ()
{
    return name;
}

int main()
{
    ZooAnimal child_lion, mother_lion;
    child_lion.Create("Tom", 1021, 135, 45);
    mother_lion.Create("jane", 1421, 120, 160);
    child_lion.isMotherOf(mother_lion);
    cout << "Tom's weightDate : " << child_lion.reptWeightDate() << endl;
    cout << "the mother of Tom's name is:" << mother_lion.reptName() << endl;

}
