// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBig.h>
#include <_root.Haslaamispaivak-11962fad.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor :61
// {
// static generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor() :61
static void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::Singleton_ = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::New1();
    Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"PrimaryColor"*/]);
}

static void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("PrimaryColor");
    ::TYPES[0] = ::g::BasicSwipeToggleBig_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor() :61
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__ctor_1_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :67
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__GetAsObject_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::BasicSwipeToggleBig*>(obj, ::TYPES[0/*BasicSwipeToggleBig*/]))->PrimaryColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :64
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__get_Name_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor New() :61
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__New1_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :66
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__get_PropertyType_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :68
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__SetAsObject_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::BasicSwipeToggleBig*>(obj, ::TYPES[0/*BasicSwipeToggleBig*/]))->SetPrimaryColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :69
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::_name_;

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor() [instance] :61
void Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor New() [static] :61
Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor::New1()
{
    Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor* obj1 = (Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor*)uNew(Haslaamispaivakirja_accessor_BasicSwipeToggleBig_PrimaryColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
