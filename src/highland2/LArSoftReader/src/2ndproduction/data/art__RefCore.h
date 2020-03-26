//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__RefCore_h
#define art__RefCore_h
namespace art {
class RefCore;
} // end of namespace.

#include "Rtypes.h"
#include "art__ProductID.h"
#include "art__RefCore.h"

namespace art {
class RefCore {

public:
// Nested classes forward declaration.
class RefCoreTransients;

public:
// Nested classes declaration.
class RefCoreTransients {

public:
// Nested classes declaration.

public:
// Data Members.

   RefCoreTransients();
   RefCoreTransients(const RefCoreTransients & );
   virtual ~RefCoreTransients();

   ClassDef(RefCoreTransients,11); // Generated by MakeProject.
};

public:
// Data Members.
   art::ProductID id_;         //
   art::RefCore::RefCoreTransients transients_;    //

   RefCore();
   RefCore(const RefCore & );
   virtual ~RefCore();

   ClassDef(RefCore,11); // Generated by MakeProject.
};
} // namespace
#endif