//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef recob__Vertex_h
#define recob__Vertex_h
namespace recob {
class Vertex;
} // end of namespace.

#include "Rtypes.h"
#include "Math/GenVector/PositionVector3D.h"
#include "Math/GenVector/Cartesian3D.h"
#include "Math/GenVector/CoordinateSystemTags.h"
#include "Math/SMatrix.h"
#include "Math/MatrixRepresentationsStatic.h"

namespace recob {
class Vertex {

public:
// Nested classes forward declaration.
enum Status { kDefault_Status };

public:
// Nested classes declaration.

public:
// Data Members.
   ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::GlobalCoordinateSystemTag> pos_;        //Vertex 3D position
   ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> >                                    cov_;        //Vertex covariance matrix 3x3
   double                                                                                              chi2_;       //Vertex fit chi2
   int                                                                                                 ndof_;       //Vertex fit degrees of freedom
   Int_t                                                                                               status_;     //Vertex status, as define in Vertex::Status enum
   int                                                                                                 id_;         //id number for vertex

   Vertex();
   Vertex(const Vertex & );
   virtual ~Vertex();

   ClassDef(Vertex,15); // Generated by MakeProject.
};
} // namespace
#endif
