/********************************
Copyright © 2020 

Authors: Venkat Ragavan S, Garima Dave, Akash Manish Lad, Tarun A H, Dr.Mohana N
Organization: VIT Chennai
Email: mail2venkat21@gmail.com, garimadave628@gmail.com, akashlad4000@gmail.com, tarun.ambili123@gmail.com, mohana.n@vit.ac.in

This toolbox integrates the functionalities of R with Scilab. 

This file must be used under the terms of CeCILL. This source file is licensed as described in the 
file LICENSE, which you should have received as part of this distribution. The terms are also 
available at
https://cecill.info/licences/Licence_CeCILL_V2-en.txt 

This software is governed by the CeCILL  license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
********************************/



Name of the toolbox: Scilab-R Toolbox

Purpose of the toolbox: To serve the statistical testing purpose by integrating R-Studio functions in Scilab via C libraries

Target Operating systems: Linux

External Software used: R Studio

External library that toolbox used : C libraries to integrate with Scilab software

Wikipedia link of the software integrated: https://en.wikipedia.org/wiki/RStudio

Step-by-step build instructions to compile the source code of the RStudio functions using C libraries:

STEP 1: 	Running the run.sh file using the command ./run.sh in terminal. Copying the header in thirdparty/linux/include along with '.so' file in thirdparty/linux/lib/x64 into thirdparty folder in the toolbox. 
	Initialising R environment in terminal in linux using "export R_HOME = /usr/lib/R"
STEP 2: 	Launching Scilab by calling "./scilab" 	
STEP 3:    Executing the command 'exec builder.sce' in scilab console inside the toolbox directory
STEP 4:	Executing the command 'exec loader.sce' in scilab console inside the toolbox directory
STEP 5:    Calling the implemented RStudio methods by declaring it to a variable. For example considering kruskal_wallis() method, declaring as: a = kruskal_wallis()


Directory structure of the Toolbox:
				etc: The .start and .quit present in this directory which helps in loading and unloading the toolbox.
				examples: This directory has sample example programs with the functions implemented in scilab.
				gateway: The sci_gateway files are present inside this directory which has gateway files for each C code written. 
					This acts as a bridge between scilab and C code.
				help: The .xml file present inside this directory is designed for each RStudio function  implemented in the toolbox.
					This inturn helps in showing the help inside the scilab.				
				macros: The macros directory is used to integrate the functions written in scilab itself saved as .sci inside the toolbox.
				third-party: The .c and .h present inside this has the C code of the functions implemented, this is integrated in scilab through gateways.

Version: 1.0.0

Licence : CeCILL

Last updated: 09-07-2020

Prerequisite for the Scilab-R toolbox in Linux: gcc installed in linux (sudo apt-get install gcc) and R installed in linux (sudo apt-get install r-base)

Building the toolbox: executing the command 'exec builder.sce' in scilab console inside the toolbox directory.

Loading the toolbox: executing the command 'exec loader.sce' in scilab console inside the toolbox directory.

Authors : 
1. Venkat Ragavan S (mail2venkat21@gmail.com)
2. Garima Dave (garimadave628@gmail.com)
3. Akash Manish Lad (akashlad4000@gmail.com)
4. Tarun A H (tarun.ambili123@gmail.com)
5. Mohana N (mohana.n@vit.ac.in)

Other important source links:

1. Detailed documentation of Scilab-R-Toolbox: https://bit.ly/31jHbzf

2. Integration of R using C libraries: http://sebastian-mader.net/programming/using-r-from-c-c/

3. Statistical/Algebraic R functions called through integrating C libraries to Scilab: https://www.rdocumentation.org/
