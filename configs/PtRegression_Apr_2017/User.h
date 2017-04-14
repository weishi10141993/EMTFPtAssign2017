
// *** Default user settings *** //
TString OUT_DIR_NAME  = ".";  // Directory for output ROOT file
TString OUT_FILE_NAME = "PtRegression_Apr_2017";  // Name base for output ROOT file
TString EOS_DIR_NAME  = "root://eoscms.cern.ch//store/user/abrinke1/EMTF/Emulator/ntuples";  // Input directory in eos

inline void ConfigureUser( const TString USER ) {

  std::cout << "\nConfiguring code for user " << USER << std::endl;
  
  if (USER == "AWB") {
    OUT_DIR_NAME  = "/afs/cern.ch/work/a/abrinke1/public/EMTF/PtAssign2017";
    OUT_FILE_NAME = "PtRegression_Apr_2017_04_13";
  }
  if (USER == "JTR") {
  }

} // End function: inline void ConfigureUser()    
