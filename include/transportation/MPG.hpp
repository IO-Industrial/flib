//! \brief Miles Per Gallon
//! \file MPG.hpp
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
#ifndef _MPG_HPP_
#define _MPG_HPP_

namespace ioi
{
    namespace transportation
    {

        //! \brief Calculate Fuel Efficiency (MPG or KPL)
        //!
        //! \param distance Distance travelled, in miles or kilometers.
        //! \param fuel_consumed  Amount of fuel consumed, in gallons or liters.
        //!
        //! \return
        //! This function will return the calculated miles per gallon (or Kilometers 
        //! per Liter). 
        //! If fuel_consumed is less than or equal to zero, the result is zero (0).
        template <class T>
        T calculate_fuel_efficency(T distance, T fuel_consumed)
        {
            T result = 0;
            if (fuel_consumed > 0)
                result = distance / fuel_consumed;
            return result;
        }

        //! \brief Calculate Fuel Required 
        //!
        //! \param distance Distance travelled, in miles or kilometers.
        //! \param efficiency fuel efficiency, in MPG or KPL.
        //! \return
        //! This function returns the total number of gallons (or Liters)
        //! required to cover the distance.
        template <class T>
        T calculate_fuel_required(T distance, T efficiency)
        {
            T result = 0;
            if (efficiency > 0)
                result = distance / efficiency;
            return result;
        }
    }
}

#endif