namespace basic
{
    [Uno.Compiler.UxGenerated]
    public partial class TextBoxAction: Fuse.Controls.TextInput
    {
        string _field_Send;
        [global::Uno.UX.UXOriginSetter("SetSend")]
        public string Send
        {
            get { return _field_Send; }
            set { SetSend(value, null); }
        }
        public void SetSend(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Send)
            {
                _field_Send = value;
                OnPropertyChanged("Send", origin);
            }
        }
        string _field_DataKey;
        [global::Uno.UX.UXOriginSetter("SetDataKey")]
        public string DataKey
        {
            get { return _field_DataKey; }
            set { SetDataKey(value, null); }
        }
        public void SetDataKey(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_DataKey)
            {
                _field_DataKey = value;
                OnPropertyChanged("DataKey", origin);
            }
        }
        global::Uno.UX.Property<string> this_Send_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        internal global::Fuse.Triggers.Actions.Callback TheEnter;
        internal global::Fuse.Reactive.EventBinding temp_eb17;
        internal global::Fuse.Triggers.Actions.Callback TheNoFocus;
        internal global::Fuse.Reactive.EventBinding temp_eb18;
        static TextBoxAction()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextBoxAction()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this_Send_inst = new Haslaamispaivakirja_basicTextBoxAction_Send_Property(this, __selector0);
            var temp2 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(this_Send_inst);
            temp_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property(temp, __selector1);
            var temp3 = new global::Fuse.Reactive.Property(temp2, Haslaamispaivakirja_accessor_Fuse_Controls_TextInputControl_Value.Singleton);
            var temp4 = new global::Fuse.Reactive.Data("isOnInput");
            var temp5 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Fuse.Triggers.Actions.Set<string>(this_Send_inst);
            temp1_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property(temp1, __selector1);
            var temp6 = new global::Fuse.Reactive.Property(temp5, Haslaamispaivakirja_accessor_Fuse_Controls_TextInputControl_Value.Singleton);
            var temp7 = new global::Fuse.Reactive.Data("isOnInput");
            var temp8 = new global::Fuse.Reactive.Data("entrystr");
            var temp9 = new global::Fuse.Drawing.SolidColor();
            var temp10 = new global::Fuse.Triggers.TextInputActionTriggered();
            var temp11 = new global::Fuse.Triggers.Actions.DebugAction();
            TheEnter = new global::Fuse.Triggers.Actions.Callback();
            var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            temp_eb17 = new global::Fuse.Reactive.EventBinding(temp4);
            var temp13 = new global::Fuse.Triggers.WhileNotFocused();
            var temp14 = new global::Fuse.Triggers.Actions.DebugAction();
            TheNoFocus = new global::Fuse.Triggers.Actions.Callback();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            temp_eb18 = new global::Fuse.Reactive.EventBinding(temp7);
            var temp16 = new global::Fuse.Reactive.DataBinding(this_Send_inst, temp8, Fuse.Reactive.BindingMode.Default);
            this.ActionStyle = Fuse.Controls.TextInputActionStyle.Go;
            this.TextColor = Fuse.Drawing.Colors.White;
            this.CaretColor = Fuse.Drawing.Colors.White;
            this.Padding = float4(10f, 10f, 0f, 10f);
            this.SourceLineNumber = 10;
            this.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp9.Color = float4(0f, 0f, 0f, 0.09803922f);
            temp10.SourceLineNumber = 15;
            temp10.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp10.Actions.Add(temp11);
            temp10.Actions.Add(temp);
            temp10.Actions.Add(TheEnter);
            temp10.Bindings.Add(temp12);
            temp10.Bindings.Add(temp_eb17);
            temp11.Message = "Typed and Enter!";
            temp11.SourceLineNumber = 16;
            temp11.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp.SourceLineNumber = 17;
            temp.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp3.SourceLineNumber = 17;
            temp3.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp2.SourceLineNumber = 17;
            temp2.SourceFileName = "Components/basic.TextBoxAction.ux";
            TheEnter.SourceLineNumber = 18;
            TheEnter.SourceFileName = "Components/basic.TextBoxAction.ux";
            TheEnter.Handler += temp_eb17.OnEvent;
            temp4.SourceLineNumber = 18;
            temp4.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp13.SourceLineNumber = 22;
            temp13.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp13.Actions.Add(temp14);
            temp13.Actions.Add(temp1);
            temp13.Actions.Add(TheNoFocus);
            temp13.Bindings.Add(temp15);
            temp13.Bindings.Add(temp_eb18);
            temp14.Message = "Lost Focus!";
            temp14.SourceLineNumber = 23;
            temp14.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp1.SourceLineNumber = 24;
            temp1.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp6.SourceLineNumber = 24;
            temp6.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp5.SourceLineNumber = 24;
            temp5.SourceFileName = "Components/basic.TextBoxAction.ux";
            TheNoFocus.SourceLineNumber = 25;
            TheNoFocus.SourceFileName = "Components/basic.TextBoxAction.ux";
            TheNoFocus.Handler += temp_eb18.OnEvent;
            temp7.SourceLineNumber = 25;
            temp7.SourceFileName = "Components/basic.TextBoxAction.ux";
            temp8.SourceLineNumber = 10;
            temp8.SourceFileName = "Components/basic.TextBoxAction.ux";
            this.Background = temp9;
            this.Children.Add(temp10);
            this.Children.Add(temp13);
            this.Bindings.Add(temp16);
        }
        static global::Uno.UX.Selector __selector0 = "Send";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
}
