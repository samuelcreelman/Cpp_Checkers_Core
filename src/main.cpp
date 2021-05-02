#include <chrono>
#include <iostream>
#include <thread>

#include <SDL.h>

const int kFRAME_RATE = 30;  // Frames per second

int main(int argc, char** args)
{
    constexpr std::size_t kTargetFrameDuration {1000/kFRAME_RATE};

    std::cout << "Checkers Start" << std::endl;

    // TODO: Initialize Graphics
    // TODO: Initialize Input

    //bool quitGame = false;

    int frameCounter = 0;
    Uint32 frameStart;
    Uint32 frameEnd;
    Uint32 frameDuration;

    // TODO: Replace with bool check for running the game
    while(frameCounter < kFRAME_RATE * 3)
    {
        frameStart = SDL_GetTicks();

        // TODO: Process Input
        // TODO: Process Game Update
        // TODO: Render the screen
        
        // Simulate some work
        std::this_thread::sleep_for(std::chrono::microseconds(100));
        
        frameEnd = SDL_GetTicks();
        frameDuration = frameEnd - frameStart;

        // Compare this frame duration to target. Wait for the remaining time
        if(frameDuration < kTargetFrameDuration)
        {
            SDL_Delay(kTargetFrameDuration - frameDuration);
        }

        frameCounter++;

        std::cout << "Frame: " << frameCounter << ". Time in seconds: " << std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) << std::endl;

    }

    // TODO: Release Input
    // TODO: Release Graphics

    std::cout << "Checkers Exited" << std::endl;

    return 0;
}