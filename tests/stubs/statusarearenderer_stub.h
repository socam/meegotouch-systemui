#ifndef STATUSAREARENDERER_STUB
#define STATUSAREARENDERER_STUB

#include "statusarearenderer.h"
#include <stubbase.h>


// 1. DECLARE STUB
// FIXME - stubgen is not yet finished
class StatusAreaRendererStub : public StubBase {
  public:
  virtual void StatusAreaRendererConstructor(QObject *parent);
  virtual void StatusAreaRendererDestructor();
  virtual void accumulateSceneChanges(const QList<QRectF> &region);
  virtual void renderAccumulatedRegion();
  virtual bool createBackPixmap();
#ifdef HAVE_QMSYSTEM
  virtual void setSceneRender(MeeGo::QmDisplayState::DisplayState state);
#endif
  virtual uint sharedPixmapHandle();
  virtual bool createSharedPixmapHandle();
  virtual void setSizeFromStyle();
  virtual void createStatusAreaPropertyWindow();
  virtual void setStatusAreaPropertyWindowIdToRootWindowProperty();
  virtual void setSharedPixmapHandleToWindowProperty();
  virtual void startTrackingRootWindowProperties();
  virtual void stopTrackingRootWindowProperties();
  virtual bool setupStatusBarVisibleListener();
  virtual bool updateStatusBarVisibleProperty();
  virtual void wmWindowUnavailable();
  virtual void trapXErrors();
  virtual void untrapXErrors();
  virtual bool xEventFilter(const XEvent &event);
};

// 2. IMPLEMENT STUB
void StatusAreaRendererStub::StatusAreaRendererConstructor(QObject *parent) {
  Q_UNUSED(parent);

}
void StatusAreaRendererStub::StatusAreaRendererDestructor() {

}
void StatusAreaRendererStub::accumulateSceneChanges(const QList<QRectF> &region) {
  QList<ParameterBase*> params;
  params.append( new Parameter<const QList<QRectF> & >(region));
  stubMethodEntered("accumulateSceneChanges",params);
}

#ifdef HAVE_QMSYSTEM
void StatusAreaRendererStub::setSceneRender(MeeGo::QmDisplayState::DisplayState state) {
  QList<ParameterBase*> params;
  params.append( new Parameter<MeeGo::QmDisplayState::DisplayState >(state));
  stubMethodEntered("setSceneRender",params);
}
#endif

uint StatusAreaRendererStub::sharedPixmapHandle() {
    stubMethodEntered("sharedPixmapHandle");
    return stubReturnValue<uint>("sharedPixmapHandle");
}

bool StatusAreaRendererStub::createSharedPixmapHandle() {
  stubMethodEntered("createSharedPixmapHandle");
  return stubReturnValue<bool>("createSharedPixmapHandle");
}

bool StatusAreaRendererStub::createBackPixmap() {
  stubMethodEntered("createBackPixmap");
  return stubReturnValue<bool>("createBackPixmap");
}

void StatusAreaRendererStub::setSizeFromStyle() {
  stubMethodEntered("setSizeFromStyle");
}

void StatusAreaRendererStub::renderAccumulatedRegion() {
  stubMethodEntered("renderAccumulatedRegion");
}

void StatusAreaRendererStub::createStatusAreaPropertyWindow() {
  stubMethodEntered("createStatusAreaPropertyWindow");
}

void StatusAreaRendererStub::setStatusAreaPropertyWindowIdToRootWindowProperty() {
  stubMethodEntered("setStatusAreaPropertyWindowIdToRootWindowProperty");
}

void StatusAreaRendererStub::setSharedPixmapHandleToWindowProperty() {
  stubMethodEntered("setSharedPixmapHandleToWindowProperty");
}

void StatusAreaRendererStub::startTrackingRootWindowProperties() {
  stubMethodEntered("startTrackingRootWindowProperties");
}

void StatusAreaRendererStub::stopTrackingRootWindowProperties() {
  stubMethodEntered("stopTrackingRootWindowProperties");
}

bool StatusAreaRendererStub::setupStatusBarVisibleListener() {
  stubMethodEntered("setupStatusBarVisibleListener");
  return stubReturnValue<bool>("setupStatusBarVisibleListener");
}

bool StatusAreaRendererStub::updateStatusBarVisibleProperty() {
  stubMethodEntered("updateStatusBarVisibleProperty");
  return stubReturnValue<bool>("updateStatusBarVisibleProperty");
}

void StatusAreaRendererStub::wmWindowUnavailable() {
  stubMethodEntered("wmWindowUnavailable");
}

void StatusAreaRendererStub::trapXErrors() {
  stubMethodEntered("trapXErrors");
}

void StatusAreaRendererStub::untrapXErrors() {
  stubMethodEntered("untrapXErrors");
}



bool StatusAreaRendererStub::xEventFilter(const XEvent &event) {
  QList<ParameterBase*> params;
  params.append( new Parameter<XEvent>(event));
  stubMethodEntered("xEventFilter");
  return stubReturnValue<bool>("xEventFilter");
}

// 3. CREATE A STUB INSTANCE
StatusAreaRendererStub gDefaultStatusAreaRendererStub;
StatusAreaRendererStub* gStatusAreaRendererStub = &gDefaultStatusAreaRendererStub;


// 4. CREATE A PROXY WHICH CALLS THE STUB
StatusAreaRenderer::StatusAreaRenderer(QObject *parent) {
  gStatusAreaRendererStub->StatusAreaRendererConstructor(parent);
}

StatusAreaRenderer::~StatusAreaRenderer() {
  gStatusAreaRendererStub->StatusAreaRendererDestructor();
}

void StatusAreaRenderer::accumulateSceneChanges(const QList<QRectF> &region) {
  gStatusAreaRendererStub->accumulateSceneChanges(region);
}

#ifdef HAVE_QMSYSTEM
void StatusAreaRenderer::setSceneRender(MeeGo::QmDisplayState::DisplayState state) {
  gStatusAreaRendererStub->setSceneRender(state);
}
#endif

uint StatusAreaRenderer::sharedPixmapHandle() {
  return gStatusAreaRendererStub->sharedPixmapHandle();
}


bool StatusAreaRenderer::createSharedPixmapHandle() {
  return gStatusAreaRendererStub->createSharedPixmapHandle();
}

bool StatusAreaRenderer::createBackPixmap() {
  return gStatusAreaRendererStub->createBackPixmap();
}

void StatusAreaRenderer::setSizeFromStyle() {
  gStatusAreaRendererStub->setSizeFromStyle();
}

void StatusAreaRenderer::renderAccumulatedRegion() {
  gStatusAreaRendererStub->renderAccumulatedRegion();
}

void StatusAreaRenderer::createStatusAreaPropertyWindow() {
  gStatusAreaRendererStub->createStatusAreaPropertyWindow();
}

void StatusAreaRenderer::setStatusAreaPropertyWindowIdToRootWindowProperty() {
  gStatusAreaRendererStub->setStatusAreaPropertyWindowIdToRootWindowProperty();
}

void StatusAreaRenderer::setSharedPixmapHandleToWindowProperty() {
  gStatusAreaRendererStub->setSharedPixmapHandleToWindowProperty();
}

void StatusAreaRenderer::startTrackingRootWindowProperties() {
  gStatusAreaRendererStub->startTrackingRootWindowProperties();
}

void StatusAreaRenderer::stopTrackingRootWindowProperties() {
  gStatusAreaRendererStub->stopTrackingRootWindowProperties();
}

bool StatusAreaRenderer::setupStatusBarVisibleListener() {
  return gStatusAreaRendererStub->setupStatusBarVisibleListener();
}

bool StatusAreaRenderer::updateStatusBarVisibleProperty() {
  return gStatusAreaRendererStub->updateStatusBarVisibleProperty();
}

void StatusAreaRenderer::wmWindowUnavailable() {
  gStatusAreaRendererStub->wmWindowUnavailable();
}

void StatusAreaRenderer::trapXErrors() {
  gStatusAreaRendererStub->trapXErrors();
}

void StatusAreaRenderer::untrapXErrors() {
  gStatusAreaRendererStub->untrapXErrors();
}

bool StatusAreaRenderer::xEventFilter(const XEvent &event) {
  return gStatusAreaRendererStub->xEventFilter(event);
}

#endif
