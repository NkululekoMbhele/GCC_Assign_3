
#ifndef PGMimageProcessorDB_PGMimageProcessor_H
#define PGMimageProcessorDB_PGMimageProcessor_H

#include <string>
#include <iostream>

using namespace std;

class PGMimageProcessor {
private:
    string name;
        double gpa;

      public:
         PGMimageProcessor(string theName, double theGpa);

        // accessor
        string get_name() const;

       // mutator
       void set_gpa(double newGpa);

      friend ostream& operator<<(ostream& ostr, const PGMimageProcessor& stud);
	                       };
ostream& operator<<(ostream& ostr, const PGMimageProcessor& stud);
#endif //PGMimageProcessorDB_PGMimageProcessor_H
