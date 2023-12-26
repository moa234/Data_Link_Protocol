//
// Generated file, do not edit! Created by opp_msgtool 6.0 from selfMsg.msg.
//

#ifndef __SELFMSG_M_H
#define __SELFMSG_M_H

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION != OMNETPP_VERSION)
#error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class SelfMsg;
/**
 * Class generated from <tt>selfMsg.msg:19</tt> by opp_msgtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet SelfMsg
 * {
 *     \@customize(true);  // see the generated C++ header for more info
 *     int selfMsgType;
 *     int seqNumber;
 * }
 * </pre>
 *
 * SelfMsg_Base is only useful if it gets subclassed, and SelfMsg is derived from it.
 * The minimum code to be written for SelfMsg is the following:
 *
 * <pre>
 * class SelfMsg : public SelfMsg_Base
 * {
 *   private:
 *     void copy(const SelfMsg& other) { ... }

 *   public:
 *     SelfMsg(const char *name=nullptr, short kind=0) : SelfMsg_Base(name,kind) {}
 *     SelfMsg(const SelfMsg& other) : SelfMsg_Base(other) {copy(other);}
 *     SelfMsg& operator=(const SelfMsg& other) {if (this==&other) return *this; SelfMsg_Base::operator=(other); copy(other); return *this;}
 *     virtual SelfMsg *dup() const override {return new SelfMsg(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from SelfMsg_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(SelfMsg)
 * </pre>
 */
class SelfMsg_Base : public ::omnetpp::cPacket {
   protected:
    int selfMsgType = 0;
    int seqNumber = 0;

   private:
    void copy(const SelfMsg_Base &other);

   protected:
    bool operator==(const SelfMsg_Base &) = delete;
    // make constructors protected to avoid instantiation
    // make assignment operator protected to force the user override it
    SelfMsg_Base &operator=(const SelfMsg_Base &other);

   public:
    SelfMsg_Base(const char *name = nullptr, short kind = 0);
    SelfMsg_Base(const SelfMsg_Base &other);
    virtual ~SelfMsg_Base();
    virtual SelfMsg_Base *dup() const override { return new SelfMsg_Base(*this); }
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getSelfMsgType() const;
    virtual void setSelfMsgType(int selfMsgType);

    virtual int getSeqNumber() const;
    virtual void setSeqNumber(int seqNumber);
};

namespace omnetpp {

template <>
inline SelfMsg_Base *fromAnyPtr(any_ptr ptr) { return check_and_cast<SelfMsg_Base *>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif  // ifndef __SELFMSG_M_H
