//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__FileIndex__Element_h
#define art__FileIndex__Element_h
namespace art {
namespace FileIndex {
class Element;
} // end of namespace.
} // end of namespace.

#include "Rtypes.h"
#include "art__EventID.h"

namespace art {
namespace FileIndex {
class Element {

public:
// Nested classes declaration.

public:
// Data Members.
   art::EventID eventID_;    //
   Long64_t     entry_;      //

   Element();
   Element(const Element & );
   virtual ~Element();

   ClassDef(Element,12); // Generated by MakeProject.
};
} // namespace
} // namespace
#endif