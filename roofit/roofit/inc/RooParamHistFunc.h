/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

#ifndef ROO_PARAM_HIST_FUNC
#define ROO_PARAM_HIST_FUNC

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
#include "RooListProxy.h"
#include "RooSetProxy.h"
#include "RooDataHist.h"

class RooParamHistFunc : public RooAbsReal {
public:
  RooParamHistFunc() {} ;
  RooParamHistFunc(const char *name, const char *title, RooDataHist& dh, Bool_t paramRelative=kTRUE);
  RooParamHistFunc(const char *name, const char *title, const RooAbsArg& x, RooDataHist& dh, Bool_t paramRelative=kTRUE);
  RooParamHistFunc(const char *name, const char *title, RooDataHist& dh, const RooParamHistFunc& paramSource, Bool_t paramRelative=kTRUE) ;
  RooParamHistFunc(const RooParamHistFunc& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooParamHistFunc(*this,newname); }
  inline virtual ~RooParamHistFunc() { }

  virtual std::list<Double_t>* binBoundaries(RooAbsRealLValue& /*obs*/, Double_t /*xlo*/, Double_t /*xhi*/) const ;
  virtual std::list<Double_t>* plotSamplingHint(RooAbsRealLValue& obs, Double_t xlo, Double_t xhi) const ;
  virtual Bool_t isBinnedDistribution(const RooArgSet&) const { return kTRUE ; }


  virtual Bool_t forceAnalyticalInt(const RooAbsArg&) const { return kTRUE ; }
  Int_t getAnalyticalIntegralWN(RooArgSet& allVars, RooArgSet& analVars, const RooArgSet* normSet,const char* rangeName=0) const ;
  Double_t analyticalIntegralWN(Int_t code, const RooArgSet* normSet, const char* rangeName=0) const ;

  Double_t getActual(Int_t ibin) ;
  void setActual(Int_t ibin, Double_t newVal) ;
  Double_t getNominal(Int_t ibin) const ;
  Double_t getNominalError(Int_t ibin) const ;

  const RooArgList& paramList() const { return _p ; }

 protected:

  friend class RooHistConstraint ;

  RooListProxy  _x ;
  RooListProxy _p ;
  RooDataHist _dh ;
  Bool_t _relParam ;

  Double_t evaluate() const ;

private:

  ClassDef(RooParamHistFunc,1) // Your description goes here...
};

#endif
