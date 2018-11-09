// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/LongPressButton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LongPressButton;}

namespace g{

// public partial sealed class LongPressButton :2
// {
::g::Fuse::Controls::Panel_type* LongPressButton_typeof();
void LongPressButton__ctor_7_fn(LongPressButton* __this);
void LongPressButton__get_BackgroundColor_fn(LongPressButton* __this, ::g::Uno::Float4* __retval);
void LongPressButton__set_BackgroundColor_fn(LongPressButton* __this, ::g::Uno::Float4* value);
void LongPressButton__InitializeUX_fn(LongPressButton* __this);
void LongPressButton__New4_fn(LongPressButton** __retval);
void LongPressButton__SetBackgroundColor_fn(LongPressButton* __this, ::g::Uno::Float4* value, uObject* origin);

struct LongPressButton : ::g::Fuse::Controls::Panel
{
    ::g::Uno::Float4 _field_BackgroundColor;
    uStrong< ::g::Uno::UX::Property1*> Rect_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> Deleted_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Label_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Label_Color_inst;
    uStrong< ::g::Fuse::Controls::Text*> Label;
    uStrong< ::g::Fuse::Controls::Rectangle*> Rect;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb16;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> Deleted;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return LongPressButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return LongPressButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return LongPressButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return LongPressButton_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return LongPressButton_typeof()->Init(), __selector4_; }

    void ctor_7();
    ::g::Uno::Float4 BackgroundColor();
    void BackgroundColor(::g::Uno::Float4 value);
    void InitializeUX();
    void SetBackgroundColor(::g::Uno::Float4 value, uObject* origin);
    static LongPressButton* New4();
};
// }

} // ::g
