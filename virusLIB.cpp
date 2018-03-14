/*
virusLIB.cpp

User library for VIRUS purpose
Author  :: Jan Glos
Date    :: 8/03/2018
Place   :: Denmark, Aarhus
*/
virus::virus (float newResistance){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate default = "<< defaultReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = defaultReproductionRate;
};

virus::virus (float newReproductionRate, float newResistance){
   cout << "Object VIRUS is being created,\nResistance = " << newResistance << "\nReproduction rate = " << newReproductionRate << endl;
   resistance = newResistance;
   reproductionRate = newReproductionRate;
};

virus::~virus (){
    cout << "Virus is beeing delted !" << endl;
};

bool virus::survive (float live, float immunity){
  //  live :: actual live [0 - 1]
  if (immunity > live){
    return true;
  } else if (immunity < live){
    return false;
  } else if (immunity == live){
    return true;
  }
};
