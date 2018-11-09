// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/listBtn.Button.g.uno'.
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
namespace g{namespace generaltext{struct Text;}}
namespace g{namespace listBtn{struct Button;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct fa_check;}

namespace g{
namespace listBtn{

// public partial sealed class Button :4
// {
::g::Fuse::Controls::Panel_type* Button_typeof();
void Button__ctor_7_fn(Button* __this);
void Button__get_BgColor_fn(Button* __this, uString** __retval);
void Button__set_BgColor_fn(Button* __this, uString* value);
void Button__get_DataKey_fn(Button* __this, uString** __retval);
void Button__set_DataKey_fn(Button* __this, uString* value);
void Button__get_FontSize_fn(Button* __this, float* __retval);
void Button__set_FontSize_fn(Button* __this, float* value);
void Button__InitializeUX_fn(Button* __this);
void Button__New4_fn(Button** __retval);
void Button__get_SelectedBgColor_fn(Button* __this, uString** __retval);
void Button__set_SelectedBgColor_fn(Button* __this, uString* value);
void Button__get_Send_fn(Button* __this, uString** __retval);
void Button__set_Send_fn(Button* __this, uString* value);
void Button__SetBgColor_fn(Button* __this, uString* value, uObject* origin);
void Button__SetDataKey_fn(Button* __this, uString* value, uObject* origin);
void Button__SetFontSize_fn(Button* __this, float* value, uObject* origin);
void Button__SetSelectedBgColor_fn(Button* __this, uString* value, uObject* origin);
void Button__SetSend_fn(Button* __this, uString* value, uObject* origin);
void Button__SetText_fn(Button* __this, uString* value, uObject* origin);
void Button__get_Text_fn(Button* __this, uString** __retval);
void Button__set_Text_fn(Button* __this, uString* value);

struct Button : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Send;
    uStrong<uString*> _field_Text;
    uStrong<uString*> _field_DataKey;
    uStrong<uString*> _field_BgColor;
    uStrong<uString*> _field_SelectedBgColor;
    float _field_FontSize;
    uStrong< ::g::Uno::UX::Property1*> btnBackground_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> btnText_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> btnText_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> btnBackground_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> btnText_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Send_inst;
    uStrong< ::g::Uno::UX::Property1*> checkIcon_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> btnBackground;
    uStrong< ::g::fa_check*> checkIcon;
    uStrong< ::g::generaltext::Text*> btnText;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Button_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Button_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Button_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Button_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Button_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Button_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Button_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Button_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Button_typeof()->Init(), __selector8_; }

    void ctor_7();
    uString* BgColor();
    void BgColor(uString* value);
    uString* DataKey();
    void DataKey(uString* value);
    float FontSize();
    void FontSize(float value);
    void InitializeUX();
    uString* SelectedBgColor();
    void SelectedBgColor(uString* value);
    uString* Send();
    void Send(uString* value);
    void SetBgColor(uString* value, uObject* origin);
    void SetDataKey(uString* value, uObject* origin);
    void SetFontSize(float value, uObject* origin);
    void SetSelectedBgColor(uString* value, uObject* origin);
    void SetSend(uString* value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static Button* New4();
};
// }

}} // ::g::listBtn
