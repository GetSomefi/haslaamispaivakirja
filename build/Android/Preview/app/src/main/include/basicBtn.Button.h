// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/basicBtn.Button.g.uno'.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace basicBtn{struct Button;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace basicBtn{

// public partial sealed class Button :4
// {
::g::Fuse::Controls::Panel_type* Button_typeof();
void Button__ctor_7_fn(Button* __this);
void Button__get_FontSize_fn(Button* __this, float* __retval);
void Button__set_FontSize_fn(Button* __this, float* value);
void Button__InitializeUX_fn(Button* __this);
void Button__New4_fn(Button** __retval);
void Button__SetFontSize_fn(Button* __this, float* value, uObject* origin);
void Button__SetText_fn(Button* __this, uString* value, uObject* origin);
void Button__get_Text_fn(Button* __this, uString** __retval);
void Button__set_Text_fn(Button* __this, uString* value);

struct Button : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    float _field_FontSize;
    uStrong< ::g::Uno::UX::Property1*> temp_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Button_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Button_typeof()->Init(), __selector1_; }

    void ctor_7();
    float FontSize();
    void FontSize(float value);
    void InitializeUX();
    void SetFontSize(float value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static Button* New4();
};
// }

}} // ::g::basicBtn
