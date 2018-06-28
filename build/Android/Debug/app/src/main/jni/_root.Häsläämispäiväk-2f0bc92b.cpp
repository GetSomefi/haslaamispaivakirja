// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Häsläämispäiväk-2f0bc92b.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property :81
// {
static void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Gestures.SwipeGesture*/], offsetof(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :84
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :86
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[0/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :84
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :85
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :87
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[0/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :88
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :84
void Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property::ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :84
Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property*)uNew(Häsläämispäiväkirja_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
