// -*- C++ -*-
//
// Package:    PhysicsObjectsInfoExtractor
// Class:      PhysicsObjectsInfoExtractor
// 
/**\class PhysicsObjectsInfoExtractor PhysicsObjectsInfoExtractor.cc PhysicsObjectsInfo/PhysicsObjectsInfoExtractor/src/PhysicsObjectsInfoExtractor.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Edgar F. Carrera Jarrin (ecarrera@cern.ch)
//         Created:  Wed Jul  4 13:38:41 CEST 2018
// $Id$
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
//
// class declaration
//

class PhysicsObjectsInfoExtractor : public edm::EDAnalyzer {
   public:
      explicit PhysicsObjectsInfoExtractor(const edm::ParameterSet&);
      ~PhysicsObjectsInfoExtractor();

      static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);


   private:
      virtual void beginJob() ;
      virtual void analyze(const edm::Event&, const edm::EventSetup&);
      virtual void endJob() ;

      virtual void beginRun(edm::Run const&, edm::EventSetup const&);
      virtual void endRun(edm::Run const&, edm::EventSetup const&);
      virtual void beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&);
      virtual void endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&);

      // ----------member data ---------------------------
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
PhysicsObjectsInfoExtractor::PhysicsObjectsInfoExtractor(const edm::ParameterSet& iConfig)

{
   //now do what ever initialization is needed

}


PhysicsObjectsInfoExtractor::~PhysicsObjectsInfoExtractor()
{
 
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called for each event  ------------
void
PhysicsObjectsInfoExtractor::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup)
{
   using namespace edm;



#ifdef THIS_IS_AN_EVENT_EXAMPLE
   Handle<ExampleData> pIn;
   iEvent.getByLabel("example",pIn);
#endif
   
#ifdef THIS_IS_AN_EVENTSETUP_EXAMPLE
   ESHandle<SetupData> pSetup;
   iSetup.get<SetupRecord>().get(pSetup);
#endif
}


// ------------ method called once each job just before starting event loop  ------------
void 
PhysicsObjectsInfoExtractor::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
PhysicsObjectsInfoExtractor::endJob() 
{
}

// ------------ method called when starting to processes a run  ------------
void 
PhysicsObjectsInfoExtractor::beginRun(edm::Run const&, edm::EventSetup const&)
{
}

// ------------ method called when ending the processing of a run  ------------
void 
PhysicsObjectsInfoExtractor::endRun(edm::Run const&, edm::EventSetup const&)
{
}

// ------------ method called when starting to processes a luminosity block  ------------
void 
PhysicsObjectsInfoExtractor::beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}

// ------------ method called when ending the processing of a luminosity block  ------------
void 
PhysicsObjectsInfoExtractor::endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
PhysicsObjectsInfoExtractor::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);
}

//define this as a plug-in
DEFINE_FWK_MODULE(PhysicsObjectsInfoExtractor);
