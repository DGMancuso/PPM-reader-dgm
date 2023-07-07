#include "PPMReaderDGM.h"

PPMReaderDGM::PPMReaderDGM(byte interruptPin, byte channelAmount): PPMReader(interruptPin, channelAmount){}

PPMReaderDGM::~PPMReaderDGM() {}

bool PPMReaderDGM::getSignalPresent()
{
    if(micros() - microsAtLastPulse < signalLostTimeout){return true;} // this line requires microsAtLastPulse to be protected, not private
    return false;
}
