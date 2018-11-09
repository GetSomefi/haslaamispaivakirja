// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-ba952dcf.h>
#include <listBtn.Button.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_listBtnButton_Text_Property :593
// {
static void Haslaamispaivakirja_listBtnButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::listBtn::Button_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*listBtn.Button*/], offsetof(Haslaamispaivakirja_listBtnButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_listBtnButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_listBtnButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_listBtnButton_Text_Property", options);
    type->fp_build_ = Haslaamispaivakirja_listBtnButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_listBtnButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_listBtnButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_listBtnButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Haslaamispaivakirja_listBtnButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Haslaamispaivakirja_listBtnButton_Text_Property(listBtn.Button obj, Uno.UX.Selector name) :596
void Haslaamispaivakirja_listBtnButton_Text_Property__ctor_3_fn(Haslaamispaivakirja_listBtnButton_Text_Property* __this, ::g::listBtn::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :598
void Haslaamispaivakirja_listBtnButton_Text_Property__Get1_fn(Haslaamispaivakirja_listBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::listBtn::Button*>(obj, ::TYPES[0/*listBtn.Button*/]))->Text(), void();
}

// public Haslaamispaivakirja_listBtnButton_Text_Property New(listBtn.Button obj, Uno.UX.Selector name) :596
void Haslaamispaivakirja_listBtnButton_Text_Property__New1_fn(::g::listBtn::Button* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_listBtnButton_Text_Property** __retval)
{
    *__retval = Haslaamispaivakirja_listBtnButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :597
void Haslaamispaivakirja_listBtnButton_Text_Property__get_Object_fn(Haslaamispaivakirja_listBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :599
void Haslaamispaivakirja_listBtnButton_Text_Property__Set1_fn(Haslaamispaivakirja_listBtnButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::listBtn::Button*>(obj, ::TYPES[0/*listBtn.Button*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :600
void Haslaamispaivakirja_listBtnButton_Text_Property__get_SupportsOriginSetter_fn(Haslaamispaivakirja_listBtnButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Haslaamispaivakirja_listBtnButton_Text_Property(listBtn.Button obj, Uno.UX.Selector name) [instance] :596
void Haslaamispaivakirja_listBtnButton_Text_Property::ctor_3(::g::listBtn::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_listBtnButton_Text_Property New(listBtn.Button obj, Uno.UX.Selector name) [static] :596
Haslaamispaivakirja_listBtnButton_Text_Property* Haslaamispaivakirja_listBtnButton_Text_Property::New1(::g::listBtn::Button* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_listBtnButton_Text_Property* obj1 = (Haslaamispaivakirja_listBtnButton_Text_Property*)uNew(Haslaamispaivakirja_listBtnButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
