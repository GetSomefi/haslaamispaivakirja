// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-9fe873d7.h>
#include <_root.textDropDown.h>
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

// internal sealed class Haslaamispaivakirja_accessor_textDropDown_dropDownList :281
// {
// static generated Haslaamispaivakirja_accessor_textDropDown_dropDownList() :281
static void Haslaamispaivakirja_accessor_textDropDown_dropDownList__cctor__fn(uType* __type)
{
    Haslaamispaivakirja_accessor_textDropDown_dropDownList::Singleton_ = Haslaamispaivakirja_accessor_textDropDown_dropDownList::New1();
    Haslaamispaivakirja_accessor_textDropDown_dropDownList::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"dropDownList"*/]);
}

static void Haslaamispaivakirja_accessor_textDropDown_dropDownList_build(uType* type)
{
    ::STRINGS[0] = uString::Const("dropDownList");
    ::TYPES[0] = ::g::textDropDown_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_textDropDown_dropDownList::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Haslaamispaivakirja_accessor_textDropDown_dropDownList::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* Haslaamispaivakirja_accessor_textDropDown_dropDownList_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_accessor_textDropDown_dropDownList);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("Haslaamispaivakirja_accessor_textDropDown_dropDownList", options);
    type->fp_build_ = Haslaamispaivakirja_accessor_textDropDown_dropDownList_build;
    type->fp_ctor_ = (void*)Haslaamispaivakirja_accessor_textDropDown_dropDownList__New1_fn;
    type->fp_cctor_ = Haslaamispaivakirja_accessor_textDropDown_dropDownList__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Haslaamispaivakirja_accessor_textDropDown_dropDownList__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Haslaamispaivakirja_accessor_textDropDown_dropDownList__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Haslaamispaivakirja_accessor_textDropDown_dropDownList__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Haslaamispaivakirja_accessor_textDropDown_dropDownList__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_accessor_textDropDown_dropDownList__get_SupportsOriginSetter_fn;
    return type;
}

// public generated Haslaamispaivakirja_accessor_textDropDown_dropDownList() :281
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__ctor_1_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :287
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__GetAsObject_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::textDropDown*>(obj, ::TYPES[0/*textDropDown*/]))->dropDownList(), void();
}

// public override sealed Uno.UX.Selector get_Name() :284
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__get_Name_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = Haslaamispaivakirja_accessor_textDropDown_dropDownList::_name_, void();
}

// public generated Haslaamispaivakirja_accessor_textDropDown_dropDownList New() :281
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__New1_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList** __retval)
{
    *__retval = Haslaamispaivakirja_accessor_textDropDown_dropDownList::New1();
}

// public override sealed Uno.Type get_PropertyType() :286
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__get_PropertyType_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList* __this, uType** __retval)
{
    return *__retval = uObject_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :288
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__SetAsObject_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::textDropDown*>(obj, ::TYPES[0/*textDropDown*/]))->SetdropDownList(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :289
void Haslaamispaivakirja_accessor_textDropDown_dropDownList__get_SupportsOriginSetter_fn(Haslaamispaivakirja_accessor_textDropDown_dropDownList* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> Haslaamispaivakirja_accessor_textDropDown_dropDownList::Singleton_;
::g::Uno::UX::Selector Haslaamispaivakirja_accessor_textDropDown_dropDownList::_name_;

// public generated Haslaamispaivakirja_accessor_textDropDown_dropDownList() [instance] :281
void Haslaamispaivakirja_accessor_textDropDown_dropDownList::ctor_1()
{
    ctor_();
}

// public generated Haslaamispaivakirja_accessor_textDropDown_dropDownList New() [static] :281
Haslaamispaivakirja_accessor_textDropDown_dropDownList* Haslaamispaivakirja_accessor_textDropDown_dropDownList::New1()
{
    Haslaamispaivakirja_accessor_textDropDown_dropDownList* obj1 = (Haslaamispaivakirja_accessor_textDropDown_dropDownList*)uNew(Haslaamispaivakirja_accessor_textDropDown_dropDownList_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g