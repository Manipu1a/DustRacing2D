// This file belongs to the "MiniCore" game engine.
// Copyright (C) 2010 Jussi Lind <jussi.lind@iki.fi>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
// MA  02110-1301, USA.
//

#ifndef MCDRAGFORCEGENERATOR_HH
#define MCDRAGFORCEGENERATOR_HH

#include "mcforcegenerator.hh"
#include "../mcmacros.hh"

class MCDragForceGeneratorImpl;

//! Force generator for drag
class MCDragForceGenerator : public MCForceGenerator
{
public:

    /*! Constructor
     * \param coeff1 Linear coefficient
     * \param coeff2 Quadratic coefficient
     */
    MCDragForceGenerator(MCFloat coeff1, MCFloat coeff2);

    //! Destructor
    virtual ~MCDragForceGenerator();

    //! \reimp
    virtual void updateForce(MCObject * p);

private:

    DISABLE_COPY(MCDragForceGenerator);
    DISABLE_ASSI(MCDragForceGenerator);
    MCDragForceGeneratorImpl * const m_pImpl;
};

#endif // MCDRAGFORCEGENERATOR_HH