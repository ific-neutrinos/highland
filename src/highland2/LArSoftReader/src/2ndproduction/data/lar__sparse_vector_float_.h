//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef lar__sparse_vector_float__h
#define lar__sparse_vector_float__h
namespace lar {
template <typename T0> class sparse_vector;
template <> class sparse_vector<float>;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>
#include "lar__sparse_vector_float_.h"
#include "lar__range_t_unsigned_long_.h"

namespace lar {
template <typename T0> class sparse_vector;
template <> class sparse_vector<float> {

public:
// Nested classes forward declaration.
class datarange_t;

public:
// Nested classes declaration.
class datarange_t : public lar::range_t<unsigned long> {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<float> values;      //data in the range

   datarange_t();
   datarange_t(const datarange_t & );
   virtual ~datarange_t();

};

public:
// Data Members.
   unsigned long nominal_size;    //current size
   vector<lar::sparse_vector<float>::datarange_t> ranges;          //list of ranges

   sparse_vector();
   sparse_vector(const sparse_vector & );
   virtual ~sparse_vector();

};
} // namespace
#endif