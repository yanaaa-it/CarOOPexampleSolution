#include "Manager.h"

int main() {
        Car* st1 = new Car("Alex", 15);
        Car* st2 = new Car("Peter", 9);
        Car* st3 = new Car("Harry", 13);

        int* marks = new int[5] {10, 10, 9, 8, 7};
        st1->setMarks(marks, 5);

        marks = new int[3] {9, 8, 7};
        st2->setMarks(marks, 3);

        marks = new int[6] {9, 9, 9, 9, 8, 7};
        st3->setMarks(marks, 6);

        Car** group = new Car * [3] {st1, st2, st3};

        Manager* manager = new Manager();

        double avg = manager->calculateAverageMark(group, 3);

        cout << "Average mark of student group is " << avg << ".\n";

        return 0;
}
