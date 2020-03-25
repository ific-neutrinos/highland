//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef recob__Track_h
#define recob__Track_h
namespace recob {
class Track;
} // end of namespace.

#include "Rtypes.h"
#include "recob__TrackTrajectory.h"
#include "Math/SMatrix.h"
#include "Math/MatrixRepresentationsStatic.h"
#include "Riostream.h"
#include <vector>
namespace std {} using namespace std;

namespace recob {
class Track {

public:
// Nested classes declaration.

public:
// Data Members.
   recob::TrackTrajectory fTraj;       //Stored trajectory data member
   int                    fPId;        //Particle ID hypothesis used in the fit (if any)
   float                  fChi2;       //Fit chi2
   int                    fNdof;       //Number of degrees of freedom of the fit
   ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > fCovVertex;    //Covariance matrix (local 5D representation) at start point (vertex)
   ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > fCovEnd;       //Covariance matrix (local 5D representation) at end point
   int                                                              fID;           //track's ID
   vector<vector<double> >                                          fdQdx;         //charge deposition per unit length at points

   Track();
   Track(const Track & );
   virtual ~Track();

   ClassDef(Track,16); // Generated by MakeProject.
};
} // namespace
#endif
