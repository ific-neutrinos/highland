//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef dune__ProtoDUNETimeStamp_h
#define dune__ProtoDUNETimeStamp_h
namespace dune {
class ProtoDUNETimeStamp;
} // end of namespace.

#include "Rtypes.h"

namespace dune {
class ProtoDUNETimeStamp {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int m_cookie;    //
   Int_t        m_triggerType;    //
   unsigned int m_reservedBits;    //
   ULong64_t    m_timeStamp;       //
   unsigned int m_eventCounter;    //
   bool         m_checksumGood;    //
   ULong64_t    m_lastRunStart;    //
   ULong64_t    m_lastSpillStart;    //
   ULong64_t    m_lastSpillEnd;      //
   unsigned int m_version;           //

   ProtoDUNETimeStamp();
   ProtoDUNETimeStamp(const ProtoDUNETimeStamp & );
   virtual ~ProtoDUNETimeStamp();

};
} // namespace
#endif