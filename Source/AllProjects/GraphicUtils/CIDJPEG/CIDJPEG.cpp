//
// FILE NAME: CIDJPEG.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 03/14/2005
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2019
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and
//  the author (Dean Roddey.) It is licensed under the MIT Open Source
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the main file of the facility. It just provides the lazy
//  evaluation method for the facilty object.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "CIDJPEG_.hpp"


//
//  This is the lazy eval method for the facility object.
//
TFacCIDJPEG& facCIDJPEG()
{
    static TFacCIDJPEG* pfacCIDJPEG = nullptr;
    if (!pfacCIDJPEG)
    {
        TBaseLock lockInit;
        if (!pfacCIDJPEG)
            pfacCIDJPEG = new TFacCIDJPEG;
    }
    return *pfacCIDJPEG;
}


