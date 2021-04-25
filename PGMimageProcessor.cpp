#include "PGMimageProcessor.h"

using namespace std;

PGMimageProcessor::PGMimageProcessor(string theName, double theGpa) : name(theName), gpa(-1) {
	    set_gpa(theGpa);
}

//  accessor
 string PGMimageProcessor::get_name() const {
     return name;
     }
     // mutator
     void PGMimageProcessor::set_gpa(double newGpa) {
         if (newGpa >= 0 && newGpa <= 4.0) {
                 gpa = newGpa;
                     }
                     }

                     ostream& operator<<(ostream& ostr, const PGMimageProcessor& stud) {
                         ostr << stud.get_name() << ", " << stud.gpa;
                             return ostr;
                             }
