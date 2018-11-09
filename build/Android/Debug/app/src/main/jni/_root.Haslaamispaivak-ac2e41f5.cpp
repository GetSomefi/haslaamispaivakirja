// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-ac2e41f5.h>
#include <_root.textDropDown_toimimaton.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property :715
// {
static void Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property_build(uType* type)
{
    ::TYPES[0] = ::g::textDropDown_toimimaton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*textDropDown_toimimaton*/], offsetof(Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property", options);
    type->fp_build_ = Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :720
void Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__Get1_fn(Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::textDropDown_toimimaton*>(obj, ::TYPES[0/*textDropDown_toimimaton*/]))->dropDownList(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :719
void Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__get_Object_fn(Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :721
void Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__Set1_fn(Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::textDropDown_toimimaton*>(obj, ::TYPES[0/*textDropDown_toimimaton*/]))->SetdropDownList(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :722
void Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

} // ::g
