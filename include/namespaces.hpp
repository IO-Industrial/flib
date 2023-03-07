//! \brief IO Industrial Namespaces
//!
//! This file contains doxygen documentation for the specified
//! namespaces included in the project.
//!
//! \copyright
//!
//! This file is part of the flip distribution (https://github.com/xxxx or http://xxx.github.io).
//! Copyright (c) 2023 Joe Turner.
//!
//! This program is free software: you can redistribute it and/or modify
//! it under the terms of the GNU General Public License as published by
//! the Free Software Foundation, version 3.
//!
//! This program is distributed in the hope that it will be useful, but
//! WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
//! General Public License for more details.
//!
//! You should have received a copy of the GNU General Public License
//! along with this program. If not, see <http://www.gnu.org/licenses/>.
#ifndef _IOI_NAMESPACES_HPP_
#define _IOI_NAMESPACES_HPP_

//! \brief IO Industrial Namespace
namespace ioi
{

    //! \brief Time and Date
    //! This namespace contains code relating to the manipulation of
    //! time and dates.
    namespace time
    {

    }

    //! \brief Transporation
    //! This namespace contains formulas, enumerations, constants, and
    //! inline code relating to transportation processes.
    namespace transportation
    {

    };

    //! \brief Accounting
    //! This namespace contains formulas, enumerations, constants, and
    //! inline code relating to accounting processes.
    //!
    //! More specifically, this namespace contains code to calculate payroll taxes,
    //! witholding, and otherwise generate payroll checks.
    namespace accounting
    {

        //! \brief Payroll
        //! This namespace contains formulas, enumerations, constants, and
        //! inline code relating to payroll operations.
        namespace payroll
        {

        }
    }

    //! \brief Utility functions
    namespace utility
    {

    }

    //! \brief Design patterns
    //! This namespace contains templates, abstract base classes, interfaces,
    //! and reusable design pattern implementations. 
    namespace patterns
    {

    }

};

/*! \mainpage

 \section intro Introduction
This header-only repository contains common types, structures, equates, defines and 
specialized template functions.

To put it bluntly, this repository contains code that other code depends on so it 
isn't a stand alone repository.  We are slowly refactoring and moving code into
this repository. Use at your own risk.

 \tableofcontents

 \section Requirements

 - Doxygen 1.8.0+ (for markdown support) and GraphViz.
 - GNU GCC toolchain
 - Git (obviously)

\section make Building and Installing

 \code
 $ mkdir build
 $ cmake ..
 $ make -j6; make install
 \endcode

 \section Generating Documentation

 This project uses doxygen to generate the documentation.  To generate
 this documentation, you must have doxygen installed.  Simple execute doxygen:
 \code
 $ make doc
 \endcode

 \section Running Unit Tests

 You can run unit tests (if cppunit is installed on your development workstation):

 \code
 $ ctest -V
 \endcode

*/

#endif
