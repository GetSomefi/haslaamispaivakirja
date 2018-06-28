// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/Häsläämispäiväkirja.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileString;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Haslaamispaivakirja_FuseTriggersWhileString_Value_Property;}

namespace g{

// internal sealed class Haslaamispaivakirja_FuseTriggersWhileString_Value_Property :233
// {
::g::Uno::UX::Property1_type* Haslaamispaivakirja_FuseTriggersWhileString_Value_Property_typeof();
void Haslaamispaivakirja_FuseTriggersWhileString_Value_Property__ctor_3_fn(Haslaamispaivakirja_FuseTriggersWhileString_Value_Property* __this, ::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name);
void Haslaamispaivakirja_FuseTriggersWhileString_Value_Property__Get1_fn(Haslaamispaivakirja_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Haslaamispaivakirja_FuseTriggersWhileString_Value_Property__New1_fn(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name, Haslaamispaivakirja_FuseTriggersWhileString_Value_Property** __retval);
void Haslaamispaivakirja_FuseTriggersWhileString_Value_Property__get_Object_fn(Haslaamispaivakirja_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Haslaamispaivakirja_FuseTriggersWhileString_Value_Property__Set1_fn(Haslaamispaivakirja_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct Haslaamispaivakirja_FuseTriggersWhileString_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileString*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name);
    static Haslaamispaivakirja_FuseTriggersWhileString_Value_Property* New1(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
