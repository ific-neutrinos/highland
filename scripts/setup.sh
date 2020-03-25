export MAKEFLAGS=-j8 QUICK=1

if [[ ${HOSTNAME} =~ "neutrinos" ]] ; then
   export ROOTSYS=/data4/NEXT/software/scisoft/root/v6_18_04/Linux64bit+2.6-2.12-e17-prof
   export PATH=/data4/NEXT/software/scisoft/cmake/v3_14_3/Linux64bit+2.6-2.12/bin:/data4/NEXT/software/scisoft/gcc/v7_3_0/Linux64bit+2.6-2.12/bin:$PATH
   export LD_LIBRARY_PATH=/data4/NEXT/software/scisoft/tbb/v2019_3/Linux64bit+2.6-2.12-e17-prof/lib:/data4/NEXT/software/scisoft/gcc/v7_3_0/Linux64bit+2.6-2.12/lib64:$LD_LIBRARY_PATH
fi
if [[ ${HOSTNAME} =~ "fnal" ]] ; then
         # set the gcc dir
         gcc_dir=v8_2_0
         
         # set the root dir
         root_dir=v6_18_04
         
         # set the tbb dir
         tbb_dir=v2018_2a
         
         # set the larsoft products folder
         larsoft_products=/cvmfs/larsoft.opensciencegrid.org/products
         
         compiler=Linux64bit+3.10-2.17
         compiler2=Linux64bit+3.10-2.17-e17-prof
         
         echo $compiler2
         
         # tell the system where ROOT is
         export ROOTSYS=$larsoft_products/root/$root_dir/$compiler2
         
         echo ROOTSYS=$ROOTSYS
         
         # must use the same compiler used to compile ROOT
         export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$larsoft_products/gcc/$gcc_dir/$compiler/lib64:$larsoft_products/gcc/$gcc_dir/$compiler/lib
         export PATH=$larsoft_products/gcc/$gcc_dir/$compiler/bin/:$PATH
         
         # tbb library is needed
         export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$larsoft_products/tbb/$tbb_dir/$compiler2/lib
                  
         #export LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
         export PATH=/cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_9_6/Linux64bit+3.10-2.17/bin:$PATH
         
else
   export ROOTSYS=/hep/sw/root-6.12.06/myroot
fi


export CMAKE_MODULE_PATH=$ROOTSYS
export CMAKE_PREFIX_PATH=$ROOTSYS
export HIGHLAND_PACKAGE_HIERARCHY=pionAnalysis:baseAnalysis:highlandTools:psycheSelections:highlandIO:highlandCorrections:highlandUtils:LArSoftReader:highlandEventModel:highlandCore:psycheIO:psycheDUNEUtils:psycheUtils:psycheEventModel:psycheCore
