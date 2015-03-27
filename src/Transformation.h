#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "Programme.h"
#include "InstructionAffectation.h"
#include "InstructionEcriture.h"

using namespace std;


class Transformation
{
	public:
		Transformation(Programme prog);
		virtual ~Transformation();
		void transformer();
		Programme getProgramme();
	protected:
		Programme programme;
	private:
};

#endif // TRANSFORMATION_H
