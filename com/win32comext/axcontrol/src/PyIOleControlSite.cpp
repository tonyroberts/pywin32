// This file implements the IOleControlSite Interface and Gateway for Python.
// Generated by makegw.py

#include "axcontrol_pch.h"
#include "PyIOleControlSite.h"

// @doc - This file contains autoduck documentation
// ---------------------------------------------------
//
// Interface Implementation

PyIOleControlSite::PyIOleControlSite(IUnknown *pdisp) : PyIUnknown(pdisp) { ob_type = &type; }

PyIOleControlSite::~PyIOleControlSite() {}

/* static */ IOleControlSite *PyIOleControlSite::GetI(PyObject *self)
{
    return (IOleControlSite *)PyIUnknown::GetI(self);
}

// @pymethod |PyIOleControlSite|OnControlInfoChanged|Description of OnControlInfoChanged.
PyObject *PyIOleControlSite::OnControlInfoChanged(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    if (!PyArg_ParseTuple(args, ":OnControlInfoChanged"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->OnControlInfoChanged();
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleControlSite|LockInPlaceActive|Description of LockInPlaceActive.
PyObject *PyIOleControlSite::LockInPlaceActive(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    // @pyparm int|fLock||Description for fLock
    BOOL fLock;
    if (!PyArg_ParseTuple(args, "i:LockInPlaceActive", &fLock))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->LockInPlaceActive(fLock);
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleControlSite|GetExtendedControl|Description of GetExtendedControl.
PyObject *PyIOleControlSite::GetExtendedControl(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    IDispatch *ppDisp;
    if (!PyArg_ParseTuple(args, ":GetExtendedControl"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->GetExtendedControl(&ppDisp);
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    return PyCom_PyObjectFromIUnknown(ppDisp, IID_IDispatch, FALSE);
}

// @pymethod |PyIOleControlSite|TransformCoords|Description of TransformCoords.
PyObject *PyIOleControlSite::TransformCoords(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    POINTL pPtlHimetric;
    // @pyparm (int, int)|PtlHimetric||Description for pPtlHimetric
    POINTF pPtfContainer;
    // @pyparm (float, float))|pPtfContainer||Description for pPtfContainer
    // @pyparm int|dwFlags||Description for dwFlags
    DWORD dwFlags;
    if (!PyArg_ParseTuple(args, "(ll)(ff)l:TransformCoords", &pPtlHimetric.x, &pPtlHimetric.y, &pPtfContainer.x,
                          &pPtfContainer.y, &dwFlags))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->TransformCoords(&pPtlHimetric, &pPtfContainer, dwFlags);
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    // @rdesc The result is a tuple of the transformed input points - ie,
    // a tuple of ((int, int), (float, float))
    return Py_BuildValue("(ll)(ff)", pPtlHimetric.x, pPtlHimetric.y, pPtfContainer.x, pPtfContainer.y);
}

// @pymethod |PyIOleControlSite|TranslateAccelerator|Description of TranslateAccelerator.
PyObject *PyIOleControlSite::TranslateAccelerator(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    MSG msg;
    PyObject *obpMsg;
    // @pyparm <o PyMSG>|pMsg||Description for pMsg
    // @pyparm int|grfModifiers||Description for grfModifiers
    DWORD grfModifiers;
    if (!PyArg_ParseTuple(args, "Ol:TranslateAccelerator", &obpMsg, &grfModifiers))
        return NULL;
    if (!PyWinObject_AsMSG(obpMsg, &msg))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->TranslateAccelerator(&msg, grfModifiers);
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    return PyInt_FromLong(hr);
}

// @pymethod |PyIOleControlSite|OnFocus|Description of OnFocus.
PyObject *PyIOleControlSite::OnFocus(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    // @pyparm int|fGotFocus||Description for fGotFocus
    BOOL fGotFocus;
    if (!PyArg_ParseTuple(args, "i:OnFocus", &fGotFocus))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->OnFocus(fGotFocus);
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleControlSite|ShowPropertyFrame|Description of ShowPropertyFrame.
PyObject *PyIOleControlSite::ShowPropertyFrame(PyObject *self, PyObject *args)
{
    IOleControlSite *pIOCS = GetI(self);
    if (pIOCS == NULL)
        return NULL;
    if (!PyArg_ParseTuple(args, ":ShowPropertyFrame"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOCS->ShowPropertyFrame();
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return PyCom_BuildPyException(hr, pIOCS, IID_IOleControlSite);
    Py_INCREF(Py_None);
    return Py_None;
}

// @object PyIOleControlSite|Description of the interface
static struct PyMethodDef PyIOleControlSite_methods[] = {
    {"OnControlInfoChanged", PyIOleControlSite::OnControlInfoChanged,
     1},  // @pymeth OnControlInfoChanged|Description of OnControlInfoChanged
    {"LockInPlaceActive", PyIOleControlSite::LockInPlaceActive,
     1},  // @pymeth LockInPlaceActive|Description of LockInPlaceActive
    {"GetExtendedControl", PyIOleControlSite::GetExtendedControl,
     1},  // @pymeth GetExtendedControl|Description of GetExtendedControl
    {"TransformCoords", PyIOleControlSite::TransformCoords,
     1},  // @pymeth TransformCoords|Description of TransformCoords
    {"TranslateAccelerator", PyIOleControlSite::TranslateAccelerator,
     1},                                         // @pymeth TranslateAccelerator|Description of TranslateAccelerator
    {"OnFocus", PyIOleControlSite::OnFocus, 1},  // @pymeth OnFocus|Description of OnFocus
    {"ShowPropertyFrame", PyIOleControlSite::ShowPropertyFrame,
     1},  // @pymeth ShowPropertyFrame|Description of ShowPropertyFrame
    {NULL}};

PyComTypeObject PyIOleControlSite::type("PyIOleControlSite", &PyIUnknown::type, sizeof(PyIOleControlSite),
                                        PyIOleControlSite_methods, GET_PYCOM_CTOR(PyIOleControlSite));
// ---------------------------------------------------
//
// Gateway Implementation
STDMETHODIMP PyGOleControlSite::OnControlInfoChanged(void)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("OnControlInfoChanged", NULL);
    return hr;
}

STDMETHODIMP PyGOleControlSite::LockInPlaceActive(
    /* [in] */ BOOL fLock)
{
    PY_GATEWAY_METHOD;
    return InvokeViaPolicy("LockInPlaceActive", NULL, "i", fLock);
}

STDMETHODIMP PyGOleControlSite::GetExtendedControl(
    /* [out] */ IDispatch **ppDisp)
{
    PY_GATEWAY_METHOD;
    if (ppDisp == NULL)
        return E_POINTER;
    PyObject *result;
    HRESULT hr = InvokeViaPolicy("GetExtendedControl", &result);
    if (FAILED(hr))
        return hr;
    // Process the Python results, and convert back to the real params
    PyObject *obppDisp;
    if (!PyArg_Parse(result, "O", &obppDisp))
        hr = MAKE_PYCOM_GATEWAY_FAILURE_CODE("GetExtendedControl");
    else if (!PyCom_InterfaceFromPyInstanceOrObject(obppDisp, IID_IDispatch, (void **)ppDisp, TRUE /* bNoneOK */))
        hr = MAKE_PYCOM_GATEWAY_FAILURE_CODE("GetExtendedControl");
    Py_DECREF(result);
    return hr;
}

STDMETHODIMP PyGOleControlSite::TransformCoords(
    /* [out][in] */ POINTL *pPtlHimetric,
    /* [out][in] */ POINTF *pPtfContainer,
    /* [in] */ DWORD dwFlags)
{
    PY_GATEWAY_METHOD;
    PyObject *result;
    HRESULT hr = InvokeViaPolicy("TransformCoords", &result, "(ll)(ff)l", pPtlHimetric->x, pPtlHimetric->y,
                                 pPtfContainer->x, pPtfContainer->y, dwFlags);
    if (FAILED(hr))
        return hr;
    if (!PyArg_ParseTuple(result, "(ll)(ff)", &pPtlHimetric->x, &pPtlHimetric->y, &pPtfContainer->x, &pPtfContainer->y))
        hr = MAKE_PYCOM_GATEWAY_FAILURE_CODE("GetExtendedControl");
    Py_DECREF(result);
    return hr;
}

STDMETHODIMP PyGOleControlSite::TranslateAccelerator(
    /* [in] */ MSG *pMsg,
    /* [in] */ DWORD grfModifiers)
{
    PY_GATEWAY_METHOD;
    return InvokeViaPolicy("TranslateAccelerator", NULL, "Nl", PyWinObject_FromMSG(pMsg), grfModifiers);
}

STDMETHODIMP PyGOleControlSite::OnFocus(
    /* [in] */ BOOL fGotFocus)
{
    PY_GATEWAY_METHOD;
    return InvokeViaPolicy("OnFocus", NULL, "i", fGotFocus);
}

STDMETHODIMP PyGOleControlSite::ShowPropertyFrame(void)
{
    PY_GATEWAY_METHOD;
    return InvokeViaPolicy("ShowPropertyFrame", NULL);
}
