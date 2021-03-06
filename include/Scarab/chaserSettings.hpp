/*
 * Copyright (c) 2014-2015 Kartik Kumar, Dinamica Srl
 * Copyright (c) 2014-2015 Marko Jankovic, DFKI GmbH
 * Copyright (c) 2014-2015 Natalia Ortiz, University of Southampton
 * Copyright (c) 2014-2015 Juan Romero, University of Strathclyde
 * Distributed under the MIT License.
 * See accompanying file LICENSE.md or copy at http://opensource.org/licenses/MIT
 */

#ifndef SCARAB_CHASER_SETTINGS_HPP
#define SCARAB_CHASER_SETTINGS_HPP

namespace scarab
{

//! Chaser settings.
/*!
 * Data struct containing all valid input parameters for the chaser. This struct is populated by
 * the checkSimulatorInput() function.
 *
 * @sa checkSimulatorInput, executeSimulator
 */
struct ChaserSettings
{
public:

    //! Construct data struct.
    /*!
     * Constructs data struct based on verified input parameters.
     *
     * @sa checkSimulatorInput, executeSimulator
     * @param[in] aMass     Chaser mass [kg]
     */
    ChaserSettings( const double aMass )
        : mass( aMass )
    { }

    //! Mass [kg].
    const double mass;

protected:

private:
};

} // namespace scarab

#endif // SCARAB_CHASER_SETTINGS_HPP
