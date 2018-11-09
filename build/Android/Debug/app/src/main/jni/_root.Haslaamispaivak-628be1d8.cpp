// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-628be1d8.h>
#include <_root.textDropDown_to-6dc1363c.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor :341
// {
// static generated Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor() :341
static void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::Singleton_ = Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::New1();
    Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"SelectedBgC...*/]);
}

static void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SelectedBgColor");
    ::TYPES[0] = ::g::textDropDown_toimimaton__listBtnCode_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor() :341
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__ctor_1_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :347
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__GetAsObject_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::textDropDown_toimimaton__listBtnCode*>(obj, ::TYPES[0/*textDropDown_toimimaton.listBtnCode*/]))->SelectedBgColor(), void();
}

// public override sealed Uno.UX.Selector get_Name() :344
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__get_Name_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor New() :341
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__New1_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :346
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__get_PropertyType_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :348
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__SetAsObject_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::textDropDown_toimimaton__listBtnCode*>(obj, ::TYPES[0/*textDropDown_toimimaton.listBtnCode*/]))->SetSelectedBgColor(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :349
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::_name_;

// public generated Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor() [instance] :341
void Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor New() [static] :341
Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor::New1()
{
    Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor* obj1 = (Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor*)uNew(Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
