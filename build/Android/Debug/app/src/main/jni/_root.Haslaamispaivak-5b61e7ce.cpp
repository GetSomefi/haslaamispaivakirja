// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-5b61e7ce.h>
#include <listBtn.Button.h>
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

// internal sealed class Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor :271
// {
// static generated Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor() :271
static void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::Singleton_ = Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::New1();
    Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"SelectedBgC...*/]);
}

static void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SelectedBgColor");
    ::TYPES[0] = ::g::listBtn::Button_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor() :271
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__ctor_1_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :277
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__GetAsObject_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::listBtn::Button*>(obj, ::TYPES[0/*listBtn.Button*/]))->SelectedBgColor(), void();
}

// public override sealed Uno.UX.Selector get_Name() :274
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__get_Name_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor New() :271
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__New1_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :276
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__get_PropertyType_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :278
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__SetAsObject_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::listBtn::Button*>(obj, ::TYPES[0/*listBtn.Button*/]))->SetSelectedBgColor(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :279
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::_name_;

// public generated Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor() [instance] :271
void Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor New() [static] :271
Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::New1()
{
    Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor* obj1 = (Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor*)uNew(Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g