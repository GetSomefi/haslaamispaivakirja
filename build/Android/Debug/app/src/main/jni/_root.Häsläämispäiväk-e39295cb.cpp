// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBig.h>
#include <_root.Häsläämispäiväk-e39295cb.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive :31
// {
// static generated Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive() :31
static void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__cctor__fn(uType* __type)
{
    Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::Singleton_ = Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::New1();
    Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]);
}

static void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::TYPES[0] = ::g::BasicSwipeToggleBig_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive", options);
    type->fp_build_ = Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive_build;
    type->fp_ctor_ = (void*)Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__New1_fn;
    type->fp_cctor_ = Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive() :31
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__ctor_1_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__GetAsObject_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::BasicSwipeToggleBig*>(obj, ::TYPES[0/*BasicSwipeToggleBig*/]))->IsActive()), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__get_Name_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::_name_, void();
}

// public generated Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive New() :31
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__New1_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive** __retval)
{
    *__retval = Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__get_PropertyType_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__SetAsObject_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::BasicSwipeToggleBig*>(obj, ::TYPES[0/*BasicSwipeToggleBig*/]))->SetIsActive(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive__get_SupportsOriginSetter_fn(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::Singleton_;
::g::Uno::UX::Selector Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::_name_;

// public generated Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive() [instance] :31
void Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::ctor_1()
{
    ctor_();
}

// public generated Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive New() [static] :31
Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive::New1()
{
    Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive* obj1 = (Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive*)uNew(Häsläämispäiväkirja_accessor_BasicSwipeToggleBig_IsActive_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
