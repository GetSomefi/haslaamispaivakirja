// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-3bd8d75.h>
#include <_root.textDropDown.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_textDropDown_dropDownList_Property :386
// {
static void Haslaamispaivakirja_textDropDown_dropDownList_Property_build(uType* type)
{
    ::TYPES[0] = ::g::textDropDown_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*textDropDown*/], offsetof(Haslaamispaivakirja_textDropDown_dropDownList_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_textDropDown_dropDownList_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_textDropDown_dropDownList_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_textDropDown_dropDownList_Property", options);
    type->fp_build_ = Haslaamispaivakirja_textDropDown_dropDownList_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_textDropDown_dropDownList_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_textDropDown_dropDownList_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_textDropDown_dropDownList_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_textDropDown_dropDownList_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_textDropDown_dropDownList_Property(textDropDown obj, Uno.UX.Selector name) :389
void Haslaamispaivakirja_textDropDown_dropDownList_Property__ctor_3_fn(Haslaamispaivakirja_textDropDown_dropDownList_Property* __this, ::g::textDropDown* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :391
void Haslaamispaivakirja_textDropDown_dropDownList_Property__Get1_fn(Haslaamispaivakirja_textDropDown_dropDownList_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::textDropDown*>(obj, ::TYPES[0/*textDropDown*/]))->dropDownList(), void();
}

// public Haslaamispaivakirja_textDropDown_dropDownList_Property New(textDropDown obj, Uno.UX.Selector name) :389
void Haslaamispaivakirja_textDropDown_dropDownList_Property__New1_fn(::g::textDropDown* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_textDropDown_dropDownList_Property** __retval)
{
    *__retval = Haslaamispaivakirja_textDropDown_dropDownList_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :390
void Haslaamispaivakirja_textDropDown_dropDownList_Property__get_Object_fn(Haslaamispaivakirja_textDropDown_dropDownList_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :392
void Haslaamispaivakirja_textDropDown_dropDownList_Property__Set1_fn(Haslaamispaivakirja_textDropDown_dropDownList_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::textDropDown*>(obj, ::TYPES[0/*textDropDown*/]))->SetdropDownList(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :393
void Haslaamispaivakirja_textDropDown_dropDownList_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_textDropDown_dropDownList_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_textDropDown_dropDownList_Property(textDropDown obj, Uno.UX.Selector name) [instance] :389
void Haslaamispaivakirja_textDropDown_dropDownList_Property::ctor_3(::g::textDropDown* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_textDropDown_dropDownList_Property New(textDropDown obj, Uno.UX.Selector name) [static] :389
Haslaamispaivakirja_textDropDown_dropDownList_Property* Haslaamispaivakirja_textDropDown_dropDownList_Property::New1(::g::textDropDown* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_textDropDown_dropDownList_Property* obj1 = (Haslaamispaivakirja_textDropDown_dropDownList_Property*)uNew(Haslaamispaivakirja_textDropDown_dropDownList_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g