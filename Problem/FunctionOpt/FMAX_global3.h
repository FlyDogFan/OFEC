/*************************************************************************
* Project:Open Frameworks for Evolutionary Computation (OFEC)
*************************************************************************
* Author: Changhe Li
* Email: changhe.lw@gmail.com 
* Language: C++
*************************************************************************
*  This file is part of OFEC. This library is free software;
*  you can redistribute it and/or modify it under the terms of the
*  GNU General Public License as published by the Free Software
*  Foundation; either version 2, or (at your option) any later version.
*************************************************************************/
// Created: 21 July 2011
// Last modified:
#ifndef FMAX_GLOBAL3_H
#define FMAX_GLOBAL3_H

#include "BenchmarkFunction.h"

class FMAX_global3 : public BenchmarkFunction
{
    public:    
		FMAX_global3(ParamMap &v);
        FMAX_global3(const int rId,  const int rDim, string& rName);
        virtual ~FMAX_global3();
    protected:
        void initialize();
        void evaluate__(double const *x,vector<double>& obj);
    private:
};


#endif // FMAX_GLOBAL3_H
