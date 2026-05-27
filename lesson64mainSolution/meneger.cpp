#include "Meneger.h"

double Manager::calculateAverageMark(Car** group, int size) {
        double sum = 0;
        int count = 0;

        for (int i = 0; i <group-> getSize; i++)
        {
                Car* car = group[i];
                count += car->getCount();
                for (int j = 0; j < car->getCount(); j++)
                {
                        sum += *(car->getMarks() + j);
                        //sum +=car->getMarks()[j];
                }
        }

        return sum / count;
}
