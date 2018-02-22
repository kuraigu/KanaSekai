///////////////////////////////////////////////////////////////
//
//  This is the core class, it will include
//  the basic properties of the application
//
//////////////////////////////////////////////////////////////
///
/// @file       CORE CLASSS
/// @author     Innoh Reloza
/// @date       22 February 2018
/// @version    File 0.1
///
///////////////////////////////////////////////////////////////

#ifndef CORE_H
#define CORE_H

#include "global.h"

class Core
{
    public:
        /** Create a core object by initializing properties
        and window to null **/
        Core();
        /** Initialize properties and create a window with the
        given values **/
        Core(sf::VideoMode videomode, std::string title, unsigned int fpsLimit=60,
             sf::Uint32 style=sf::Style::Default);
        ~Core();

        /** Returns the value of the private member class **/
        /// @return fpsLimit, returns null if no limit is set
        unsigned int getFPSLimit();

        /** Set the fpsLimit to a new value **/
        void setFPSLimit(unsigned int fpsLimit);

        /** The main app window **/
        sf::RenderWindow window;

        /** Window event **/
        sf::Event ev;

    protected:

    private:
        /** Frame rate per second **/
        /// @param 0 for unlimited
        unsigned int fpsLimit;
};

#endif // CORE_H
