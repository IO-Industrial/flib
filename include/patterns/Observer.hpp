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
#ifndef _OBSERVER_HPP_
#define _OBSERVER_HPP_

namespace ioi
{
    namespace patterns
    {

        template <class T>
        class Observer
        {
        public:
            Observer() {}
            virtual ~Observer() {}
            virtual void update(T *subject) = 0;
        };

    }
}

#endif
