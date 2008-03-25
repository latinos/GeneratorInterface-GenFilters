#ifndef MCDecayingPionKaonFilter_h
#define MCDecayingPionKaonFilter_h
// -*- C++ -*-
//
// Package:    MCDecayingPionKaonFilter
// Class:      MCDecayingPionKaonFilter
// 
/* 

 Description: filter events based on the Pythia particleID and the Pt_hat

 Implementation: inherits from generic EDFilter
     
*/
//
// Original Author:  Juan Alcaraz (13/03/2008)
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"


using namespace edm;
using namespace std;

//
// class decleration
//

class MCDecayingPionKaonFilter : public edm::EDFilter {
   public:
      explicit MCDecayingPionKaonFilter(const edm::ParameterSet&);
      ~MCDecayingPionKaonFilter();


      virtual bool filter(Event&, const EventSetup&);
   private:
      // ----------member data ---------------------------
      
       std::string label_;
       std::vector<int> particleID;  
       std::vector<double> ptMin;
       std::vector<double> etaMin;  
       std::vector<double> etaMax;
       std::vector<double> decayRadiusMin;  
       std::vector<double> decayRadiusMax;
       std::vector<double> decayZMin;  
       std::vector<double> decayZMax;
};
#endif
