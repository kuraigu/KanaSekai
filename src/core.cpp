#include "core.h"

Core::Core()
{
    this->fpsLimit = 0;

    //ctor
}

Core::Core(sf::VideoMode videomode, std::string title, unsigned int fpsLimit, sf::Uint32 style)
{
    this->window.create(videomode, title, style);

    if(fpsLimit > 0)
        this->window.setFramerateLimit(fpsLimit);
}

Core::~Core()
{
    //dtor
}

unsigned int Core::getFPSLimit()
{
    return fpsLimit;
}

void Core::setFPSLimit(unsigned int fpsLimit)
{
    this->fpsLimit = fpsLimit;
}
