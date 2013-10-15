#ifndef CLOSEEVENTEATER_STUB
#define CLOSEEVENTEATER_STUB

#include "closeeventeater.h"
#include <stubbase.h>


// 1. DECLARE STUB
// FIXME - stubgen is not yet finished
class CloseEventEaterStub : public StubBase {
  public:
  virtual void CloseEventEaterConstructor(QObject *parent);
  virtual bool eventFilter(QObject *obj, QEvent *event);
}; 

// 2. IMPLEMENT STUB
void CloseEventEaterStub::CloseEventEaterConstructor(QObject *parent) {
  Q_UNUSED(parent);

}
bool CloseEventEaterStub::eventFilter(QObject *obj, QEvent *event) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QObject * >(obj));
  params.append( new Parameter<QEvent * >(event));
  stubMethodEntered("eventFilter",params);
  return stubReturnValue<bool>("eventFilter");
}



// 3. CREATE A STUB INSTANCE
CloseEventEaterStub gDefaultCloseEventEaterStub;
CloseEventEaterStub* gCloseEventEaterStub = &gDefaultCloseEventEaterStub;


// 4. CREATE A PROXY WHICH CALLS THE STUB
CloseEventEater::CloseEventEater(QObject *parent) {
  gCloseEventEaterStub->CloseEventEaterConstructor(parent);
}

bool CloseEventEater::eventFilter(QObject *obj, QEvent *event) {
  return gCloseEventEaterStub->eventFilter(obj, event);
}


#endif
