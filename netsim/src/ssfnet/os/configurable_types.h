/* ------------------------- */
/* ------------------------- */
/*         WARNING: */
/*  THIS FILE IS GENERATED! */
/*        DO NOT EDIT! */
/* ------------------------- */
/* ------------------------- */

#ifndef __CONFIGURABLE_TYPES_H__
#define __CONFIGURABLE_TYPES_H__
#define JPRIME_BOOL_VAR_ID 100
#define JPRIME_FLOAT_VAR_ID 101
#define JPRIME_LONG_VAR_ID 102
#define JPRIME_LIST_VAR_ID 103
#define JPRIME_OPAQUE_VAR_ID 104
#define JPRIME_RESOURCE_VAR_ID 105
#define JPRIME_STRING_VAR_ID 106
#define JPRIME_SYMBOL_VAR_ID 107
#define JPRIME_PROPERTY 50
#define JPRIME_SYMBOL_TABLE 51
#define JPRIME_PARTITION 52
#define JPRIME_COMMUNITY 53
#define JPRIME_SYMBOL_TABLE_ENTRY 54
#define JPRIME_ROUTE_TABLE 55
#define JPRIME_ROUTE_ENTRY 56
#define JPRIME_GHOST_NODE 57
#define JPRIME_GENERIC_NODE 58
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/cnf/test/cnf_traffic.h" //class CNFTraffic : public StaticTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/cnf/cnf_session.h" //class CNFTransport : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/cnf/cnf_session.h" //class CNFApplication : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/udp/test/cbr_traffic.h" //class UDPTraffic : public StaticTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/udp/test/cbr.h" //class CBR : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/udp/test/ppbp_traffic.h" //class PPBPTraffic : public StaticTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/stcp/stcp_master.h" //class STCPMaster : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/udp/udp_master.h" //class UDPMaster : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/swing_tcp_traffic/swing_server.h" //class SwingServer : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/swing_tcp_traffic/swing_client.h" //class SwingClient : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/swing_tcp_traffic/swing_tcp_traffic.h" //class SwingTCPTraffic : public CentralizedTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/test/SymbioSimAppProt.h" //class SymbioSimAppProt : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/test/http_traffic.h" //class TCPTraffic : public StaticTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/test/http_client.h" //class HTTPClient : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/test/http_server.h" //class HTTPServer : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/tcp/tcp_master.h" //class TCPMaster : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/emu/portal_emu_proto.h" //class TrafficPortal : public EmulationProtocol ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/emu/tap_emu_proto.h" //class TAPEmulation : public EmulationProtocol ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/emu/vpn_emu_proto.h" //class OpenVPNEmulation : public EmulationProtocol ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/emu/emulation_protocol.h" //class EmulationProtocol : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/fluid/probe_session.h" //class ProbeSession : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/fluid/fluid_traffic.h" //class FluidTraffic : public TrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/fluid/fluid_queue.h" //class FluidQueue : public NicQueue ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/ipv4/ipv4_session.h" //class IPv4Session : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/ipv4/icmp_traffic.h" //class PingTraffic : public ICMPTraffic ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/ipv4/icmp_traffic.h" //class ICMPTraffic : public StaticTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/ipv4/icmpv4_session.h" //class ICMPv4Session : public ApplicationSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/application_session.h" //class ApplicationSession : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/proto/routing_protocol.h" //class RoutingProtocol : public ProtocolSession ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/link.h" //class Link : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/interface.h" //class Interface : public BaseInterface ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/interface.h" //class GhostInterface : public BaseInterface ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/interface.h" //class BaseInterface : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/host.h" //class Router : public Host ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/host.h" //class Host : public ProtocolGraph ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/droptail_queue.h" //class DropTailQueue : public NicQueue ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/net.h" //class Net : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/red_queue.h" //class RedQueue : public NicQueue ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/net/nic_queue.h" //class NicQueue : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/monitor.h" //class VizAggregate : public Aggregate ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/monitor.h" //class Aggregate : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/monitor.h" //class Monitor : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/traffic.h" //class Traffic : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/traffic.h" //class DistributedTrafficType : public DynamicTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/traffic.h" //class CentralizedTrafficType : public DynamicTrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/traffic.h" //class DynamicTrafficType : public TrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/traffic.h" //class StaticTrafficType : public TrafficType ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/traffic.h" //class TrafficType : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/protocol_graph.h" //class ProtocolGraph : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/routing.h" //class RouteTable : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/routing.h" //class GhostRoutingSphere : public RoutingSphere ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/routing.h" //class RoutingSphere : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/placeholder.h" //class PlaceHolder : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/alias.h" //class Alias : public BaseEntity ...
#include "/home/obaida/Desktop/pgc2vega/primex/netsim/src/ssfnet/os/protocol_session.h" //class ProtocolSession : public BaseEntity ...
namespace prime {
namespace ssfnet {

SSFNET_STRING* getJPRIMETypeString(int idx);
void setupJPRIMEAttrIDs();
uint32_t getJPRIMEAttrID(SSFNET_STRING& str);
SSFNET_STRING* getJPRIMEAttrName(uint32_t attr_id);
} //end prime
} //end ssfnet
#endif //__CONFIGURABLE_TYPES_H__