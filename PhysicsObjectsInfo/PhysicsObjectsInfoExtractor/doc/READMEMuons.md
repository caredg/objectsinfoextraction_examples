#Muon Information Extractor

##Description

These instructions are an example of the simplest way to extract information 
from a CMS EDM root file in order to do research or outreach/education.  

The structure of the [EDM files](https://twiki.cern.ch/twiki/bin/view/CMSPublic/WorkBookCMSSWFramework?rev=12) is rather complex because they contain [collections](https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuideDataFormatTable?rev=58) of many physics objects like muons, electrons, photons, etc., but also 
references to other lower level objects, like tracks.  For instance, 
a collection of muons or electrons usually have references to a track, 
or set of tracks, that make up that charged particle.  

While for certain applications it could be enough to have 
access to the energy, momentum and charge 
of an object, most modern research in particle physics 
would require to have access to more sophisticated information.  
For example, one may want to have information
about how much energy a muon deposited in the hadronic calorimeter (HCAL) of CMS, or the impact parameter of the track associated to an electron.

In order to extract the needed information from an EDM file to either 
use it for analysis or store it in a perhaps simpler format, 
one could start by creating a simple [EDAnalyzer](https://twiki.cern.ch/twiki/bin/view/CMSPublic/WorkBookWriteFrameworkModule) using the available CMSSW tools 
like the [mkedanlzr script](https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuideSkeletonCodeGenerator?rev=15).

This is what was done in this example.  We started from a simple EDAnalyzer
template and then included the right CMSSW (https://github.com/cms-sw/cmssw) lines of code (corresponding to the
correct point in time, i.e. the correct release) in order to be able to extract the needed information.

Many inline comments have been added to the code in order 
to make the logic more comprenhensible.  In particular, links to
twiki pages were added as much as possible.  They can be read to
expand the scope of the example.

## Usage Instructions



