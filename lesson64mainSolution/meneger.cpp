#include "Manager.h"

double Manager::calculateAverageMark(Student** group, int size) {
        double sum = 0;
        int count = 0;

        for (int i = 0; i < size; i++)
        {
                Car* car = group[i];
                count += car->getCount();
                for (int j = 0; j < car->getCount(); j++)
                {
                        sum += *(car->getMarks() + j);
                        //sum +=student->getMarks()[j];
                }
        }

        return sum / count;
}
