// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-80d86910.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Haslaamispaivakirja_FuseControlsImage_StretchMode_Property :619
// {
static void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::StretchMode_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseControlsImage_StretchMode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Haslaamispaivakirja_FuseControlsImage_StretchMode_Property", options);
    type->fp_build_ = Haslaamispaivakirja_FuseControlsImage_StretchMode_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__Set1_fn;
    return type;
}

// public Haslaamispaivakirja_FuseControlsImage_StretchMode_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :622
void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__ctor_3_fn(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.StretchMode Get(Uno.UX.PropertyObject obj) :624
void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__Get1_fn(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->StretchMode(), void();
}

// public Haslaamispaivakirja_FuseControlsImage_StretchMode_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :622
void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseControlsImage_StretchMode_Property** __retval)
{
    *__retval = Haslaamispaivakirja_FuseControlsImage_StretchMode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :623
void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__get_Object_fn(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.StretchMode v, Uno.UX.IPropertyListener origin) :625
void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property__Set1_fn(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin)
{
    int32_t v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->StretchMode(v_);
}

// public Haslaamispaivakirja_FuseControlsImage_StretchMode_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :622
void Haslaamispaivakirja_FuseControlsImage_StretchMode_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Haslaamispaivakirja_FuseControlsImage_StretchMode_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :622
Haslaamispaivakirja_FuseControlsImage_StretchMode_Property* Haslaamispaivakirja_FuseControlsImage_StretchMode_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    Haslaamispaivakirja_FuseControlsImage_StretchMode_Property* obj1 = (Haslaamispaivakirja_FuseControlsImage_StretchMode_Property*)uNew(Haslaamispaivakirja_FuseControlsImage_StretchMode_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
