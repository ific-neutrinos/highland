
#include "TransverseUtils.hxx"

namespace DetDef{
  //in m
  Float_t nd280BeamPipe           [3] = {-3.221999, -8.14599, 280.10};
  Float_t nd280NeutrinoParentDecay[3] = {-0.1388,   -1.729,   34.55 };
}

/*
// ===>
// code inside this region is from xianguo. method for calculating the reconstructed neutrino direction
void anaUtils::SetNeutrinoParentDecPointRec(TVector3 &vec){ vec = TVector3(DetDef::nd280NeutrinoParentDecay); }

TVector3 anaUtils::CalcNuDir(TVector3 &nup0Global, TVector3 &nup1Local)
{
  const TVector3 nd280Global(DetDef::nd280BeamPipe);

  //in m 
  const TVector3 nup0Local = nup0Global - nd280Global;

  TVector3 nuDirCalc = TVector3(nup1Local - nup0Local);
  nuDirCalc *= 1./nuDirCalc.Mag();

  return nuDirCalc;
}

TVector3 anaUtils::GetNuDirRec(const Float_t vertex_pos[])
{
  //-------- nup0 
  //in m, mean of the distribution, 6B neutrino flux
  TVector3 nup0Global;
  anaUtils::SetNeutrinoParentDecPointRec(nup0Global);
  
  //------ nup1
  //in m
  TVector3 nup1Local(vertex_pos);
  nup1Local *= 0.001; //default mm

  return anaUtils::CalcNuDir(nup0Global, nup1Local);
}
*/
//<============
