#ifndef PPM_READER_DGM
#define PPM_READER_DGM

#include <PPMReader.h>

class PPMReaderDGM: public PPMReader {

    public:

    PPMReaderDGM(byte interruptPin, byte channelAmount);

    ~PPMReaderDGM();

    //The timeout (microseconds) after consecutive invalid data implies the signal is gone
    unsigned long signalLostTimeout = 5000000L;

    private:

    // True if signal is detected recently
    bool signalPresent = false;

    public:

    // Returns true if object believes it has a connection
    bool getSignalPresent();
};

#endif // PPM_READER_DGM